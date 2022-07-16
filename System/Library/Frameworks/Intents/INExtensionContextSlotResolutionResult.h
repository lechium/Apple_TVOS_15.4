//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSData;

@interface INExtensionContextSlotResolutionResult : NSObject <NSSecureCoding>
{
    long long _result;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000087937
- (void).cxx_destruct;	// IMP=0x0000000000087927
@property(readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property(readonly, nonatomic) long long result; // @synthesize result=_result;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000878a1
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000877f0
- (id)initWithResult:(long long)arg1 data:(id)arg2;	// IMP=0x000000000008777a

@end

