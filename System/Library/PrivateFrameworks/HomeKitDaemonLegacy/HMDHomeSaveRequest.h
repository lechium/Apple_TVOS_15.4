//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHome, NSDictionary, NSString;

@interface HMDHomeSaveRequest : HMFObject
{
    _Bool _objectChange;	// 8 = 0x8
    _Bool _incrementGeneration;	// 9 = 0x9
    HMDHome *_home;	// 16 = 0x10
    NSString *_reason;	// 24 = 0x18
    NSDictionary *_information;	// 32 = 0x20
    unsigned long long _saveOptions;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0000000000844c98
@property(readonly, nonatomic) _Bool incrementGeneration; // @synthesize incrementGeneration=_incrementGeneration;
@property(readonly, nonatomic) _Bool objectChange; // @synthesize objectChange=_objectChange;
@property(readonly, nonatomic) unsigned long long saveOptions; // @synthesize saveOptions=_saveOptions;
@property(readonly, nonatomic) NSDictionary *information; // @synthesize information=_information;
@property(readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) HMDHome *home; // @synthesize home=_home;
- (void)_updateSaveOptions:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000000844bef
- (id)initWithReason:(id)arg1 information:(id)arg2 saveOptions:(unsigned long long)arg3;	// IMP=0x0000000000844bc7
- (id)initWithReason:(id)arg1 information:(id)arg2 postSyncNotification:(_Bool)arg3;	// IMP=0x0000000000844b9a
- (id)initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(_Bool)arg4 objectChange:(_Bool)arg5;	// IMP=0x0000000000844b13
- (id)_initWithHome:(id)arg1 reason:(id)arg2 information:(id)arg3 postSyncNotification:(_Bool)arg4 objectChange:(_Bool)arg5 saveOptions:(unsigned long long)arg6;	// IMP=0x0000000000844a0b

@end

