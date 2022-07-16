//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface BUCellularIdentity : NSObject
{
    _Bool _roaming;	// 8 = 0x8
    NSString *_defaultsKey;	// 16 = 0x10
    NSString *_simIdentity;	// 24 = 0x18
}

+ (id)_digestMD5:(id)arg1;	// IMP=0x000000000002526a
+ (id)identityForSubscription:(id)arg1 usingClient:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000024f71
- (void).cxx_destruct;	// IMP=0x000000000002539a
@property(readonly, nonatomic) NSString *simIdentity; // @synthesize simIdentity=_simIdentity;
@property(nonatomic, getter=isRoaming) _Bool roaming; // @synthesize roaming=_roaming;
@property(readonly, nonatomic) NSString *defaultsKey; // @synthesize defaultsKey=_defaultsKey;
- (id)description;	// IMP=0x0000000000025239
- (id)redactedDescription;	// IMP=0x0000000000025210
- (id)initWithSIMIdentity:(id)arg1 roaming:(_Bool)arg2;	// IMP=0x0000000000025137

@end

