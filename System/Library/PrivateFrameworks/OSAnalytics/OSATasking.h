//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface OSATasking : NSObject
{
}

+ (void)setCRKeyToRandomValue;	// IMP=0x000000000000e4be
+ (id)selectConfigFromBlob:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000000e4ae
+ (_Bool)preference:(id)arg1 alreadySetInInstructions:(id)arg2;	// IMP=0x000000000000e154
+ (id)normalizeInstructions:(id)arg1;	// IMP=0x000000000000ddb7
+ (id)getDefaultTasking;	// IMP=0x000000000000dcc7
+ (_Bool)shouldApplyPreference:(id)arg1;	// IMP=0x000000000000db6c
+ (id)getAvailableTaskingRoutings;	// IMP=0x000000000000db5f
+ (id)getInstalledTaskIds;	// IMP=0x000000000000d8de
+ (void)checkTaskingRelevance;	// IMP=0x000000000000d6eb
+ (id)applyTasking:(id)arg1 taskId:(id)arg2 fromBlob:(id)arg3;	// IMP=0x000000000000aec9
+ (id)proxyTasking:(id)arg1 taskId:(id)arg2 usingConfig:(id)arg3 fromBlob:(id)arg4;	// IMP=0x000000000000a867

@end

