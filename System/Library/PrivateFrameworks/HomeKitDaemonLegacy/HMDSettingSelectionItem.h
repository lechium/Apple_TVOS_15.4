//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeKitDaemonLegacy/NSCopying-Protocol.h>
#import <HomeKitDaemonLegacy/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMDSettingSelectionItem : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_identifier;	// 8 = 0x8
    NSString *_title;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000005385fa
- (void).cxx_destruct;	// IMP=0x00000000005385d2
@property(readonly, copy) NSString *title; // @synthesize title=_title;
@property(readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000005384fc
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000538432
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000538427
- (id)description;	// IMP=0x000000000053836d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000538299
- (unsigned long long)hash;	// IMP=0x0000000000538255
- (id)initWithTitle:(id)arg1;	// IMP=0x0000000000538187

@end

