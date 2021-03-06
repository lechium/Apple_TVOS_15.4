//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol CLSInvestigationItem;

@interface CLSCurationDebugItem
{
    unsigned long long _dedupingType;	// 40 = 0x28
    CLSCurationDebugItem *_dedupedDebugItem;	// 48 = 0x30
    id <CLSInvestigationItem> _item;	// 56 = 0x38
}

+ (id)stringForDedupingType:(unsigned long long)arg1;	// IMP=0x000000000009b4e7
- (void).cxx_destruct;	// IMP=0x000000000009b4b6
@property(retain, nonatomic) id <CLSInvestigationItem> item; // @synthesize item=_item;
- (void)dupeToDebugItem:(id)arg1 withDedupingType:(unsigned long long)arg2;	// IMP=0x000000000009b3de
- (id)identifier;	// IMP=0x000000000009b3c1
- (id)timestamp;	// IMP=0x000000000009b3a4
- (id)dictionaryRepresentation;	// IMP=0x000000000009b0f6
- (id)initWithItem:(id)arg1;	// IMP=0x000000000009b088

@end

