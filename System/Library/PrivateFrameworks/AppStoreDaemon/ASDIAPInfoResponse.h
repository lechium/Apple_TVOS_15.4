//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSDictionary;

@interface ASDIAPInfoResponse <NSCopying, NSSecureCoding>
{
    NSDictionary *_iaps;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002721b
- (void).cxx_destruct;	// IMP=0x0000000000027234
@property(readonly, nonatomic) NSDictionary *iaps; // @synthesize iaps=_iaps;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000270ea
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000270c0
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000002704e
- (id)initWithIAPs:(id)arg1;	// IMP=0x0000000000026fe0
- (id)init;	// IMP=0x0000000000026fc7

@end

