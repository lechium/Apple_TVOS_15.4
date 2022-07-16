//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Intents/NSSecureCoding-Protocol.h>

@class NSError;

@interface INIntentForwardingActionResponse : NSObject <NSSecureCoding>
{
    NSError *_error;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000374f21
- (void).cxx_destruct;	// IMP=0x0000000000374f11
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000374dca
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000374da7
- (id)initWithError:(id)arg1;	// IMP=0x0000000000374d3c

@end
