//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface CalDAVCalendarServerCollectionChangesElement
{
    long long _created;	// 64 = 0x40
    long long _updated;	// 72 = 0x48
    long long _deleted;	// 80 = 0x50
}

@property(nonatomic) long long deleted; // @synthesize deleted=_deleted;
@property(nonatomic) long long updated; // @synthesize updated=_updated;
@property(nonatomic) long long created; // @synthesize created=_created;
- (id)copyParseRules;	// IMP=0x0000000000042667
- (void)setDeletedItem:(id)arg1;	// IMP=0x000000000004260b
- (void)setUpdatedItem:(id)arg1;	// IMP=0x00000000000425af
- (void)setCreatedItem:(id)arg1;	// IMP=0x0000000000042553
- (id)init;	// IMP=0x000000000004252d

@end

