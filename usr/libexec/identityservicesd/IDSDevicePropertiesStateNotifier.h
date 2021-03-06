//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface IDSDevicePropertiesStateNotifier : NSObject
{
    NSMutableDictionary *_notifyDict;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x004000000069fe70
- (void).cxx_destruct;	// IMP=0x00200000006a0f20
- (void)setState:(unsigned long long)arg1 forProperty:(unsigned long long)arg2 deviceUniqueID:(id)arg3;	// IMP=0x00100000006a0510
- (void)updateStateForDeviceWithUniqueID:(id)arg1;	// IMP=0x00100000006a0470
- (unsigned long long)_getCurrentState:(id)arg1;	// IMP=0x00100000006a0260
- (void)dealloc;	// IMP=0x001000000069ffe0
- (id)init;	// IMP=0x001000000069ff30

@end

