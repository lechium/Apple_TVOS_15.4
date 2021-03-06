//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DoNotDisturb/NSCopying-Protocol.h>

@interface DNDDevice : NSObject <NSCopying>
{
    unsigned long long _deviceClass;	// 8 = 0x8
    unsigned long long _deviceCapabilities;	// 16 = 0x10
}

+ (id)deviceWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2;	// IMP=0x000000000000ff8b
+ (id)currentDevice;	// IMP=0x000000000000fef5
@property(readonly, nonatomic) unsigned long long deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property(readonly, nonatomic) unsigned long long deviceClass; // @synthesize deviceClass=_deviceClass;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000101d3
- (id)description;	// IMP=0x000000000001010d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000010043
- (unsigned long long)hash;	// IMP=0x0000000000010007
- (id)_initWithClass:(unsigned long long)arg1 deviceCapabilities:(unsigned long long)arg2;	// IMP=0x000000000000ffbf

@end

