//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSSearchableItem, MFMailMessage, NSData, NSString;

@interface MFLibrarySearchableIndexItem : NSObject
{
    _Bool _hasCompleteBodyData;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    MFMailMessage *_message;	// 24 = 0x18
    CSSearchableItem *_searchableItem;	// 32 = 0x20
    long long _indexingType;	// 40 = 0x28
    NSData *_bodyData;	// 48 = 0x30
}

+ (id)itemWithMessage:(id)arg1 bodyData:(id)arg2;	// IMP=0x0000000000070bed
@property(nonatomic) _Bool hasCompleteBodyData; // @synthesize hasCompleteBodyData=_hasCompleteBodyData;
@property(retain, nonatomic) NSData *bodyData; // @synthesize bodyData=_bodyData;
@property(nonatomic) long long indexingType; // @synthesize indexingType=_indexingType;
@property(readonly, retain, nonatomic) CSSearchableItem *searchableItem; // @synthesize searchableItem=_searchableItem;
@property(readonly, retain, nonatomic) MFMailMessage *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)fetchIndexableAttachments;	// IMP=0x0000000000070ebf
- (id)searchableItemWithClientState:(id)arg1;	// IMP=0x0000000000070eb7
@property(readonly, copy, nonatomic) NSString *domainIdentifier;
- (long long)compare:(id)arg1;	// IMP=0x0000000000070d70
- (void)dealloc;	// IMP=0x0000000000070d1f
- (id)initWithIdentifier:(id)arg1;	// IMP=0x0000000000070cc8
- (id)initWithMessage:(id)arg1 bodyData:(id)arg2;	// IMP=0x0000000000070c54
- (id)init;	// IMP=0x0000000000070c21

@end

