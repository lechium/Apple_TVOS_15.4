//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameController/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _GCGamepadEventKeyboardEventAdapterConfig : NSObject <NSSecureCoding>
{
    struct UsagePage_Usage_Pair _mappings[41];	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000007ebf8
- (long long)gamepadElementForUsagePage:(long long)arg1 usage:(long long)arg2;	// IMP=0x000000000007ed15
- (void)mapUsagePage:(long long)arg1 usage:(long long)arg2 toGamepadElement:(long long)arg3;	// IMP=0x000000000007ecfb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000007ecd3
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000007ec2f
- (id)init;	// IMP=0x000000000007ec00

@end
