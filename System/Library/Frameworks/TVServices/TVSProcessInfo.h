//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TVSProcessInfo : NSObject
{
    struct __SecTask *_currentTask;	// 8 = 0x8
}

+ (id)currentProcessInfo;	// IMP=0x0000000000080078
@property(nonatomic) struct __SecTask *currentTask; // @synthesize currentTask=_currentTask;
- (_Bool)valueForEntitlement:(id)arg1 containsObject:(id)arg2;	// IMP=0x000000000008023e
- (_Bool)boolValueForEntitlement:(id)arg1;	// IMP=0x00000000000801e4
- (id)valueForEntitlement:(id)arg1;	// IMP=0x000000000008015b
- (void)dealloc;	// IMP=0x000000000008011c
- (id)init;	// IMP=0x00000000000800cd

@end
