//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSNumber;

@interface HMDVideoResolution : HAPNumberParser <NSSecureCoding, NSCopying>
{
    NSNumber *_imageWidth;	// 8 = 0x8
    NSNumber *_imageHeight;	// 16 = 0x10
    unsigned long long _resolutionType;	// 24 = 0x18
}

+ (id)arrayWithResolutions:(id)arg1;	// IMP=0x000000000006b6b0
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000006b6a8
- (void).cxx_destruct;	// IMP=0x000000000006a2dd
@property(readonly, nonatomic) unsigned long long resolutionType; // @synthesize resolutionType=_resolutionType;
@property(readonly, copy, nonatomic) NSNumber *imageHeight; // @synthesize imageHeight=_imageHeight;
@property(readonly, copy, nonatomic) NSNumber *imageWidth; // @synthesize imageWidth=_imageWidth;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000006a259
- (void)_extractWidthAndHeight;	// IMP=0x000000000006a1b3
- (id)initWithResolution:(unsigned long long)arg1;	// IMP=0x000000000006a155
- (id)initWithTLVData:(id)arg1;	// IMP=0x000000000006a0e9
- (void)description:(id)arg1 indent:(id)arg2;	// IMP=0x000000000006a02e
- (id)description;	// IMP=0x0000000000069fba
- (unsigned long long)hash;	// IMP=0x0000000000069fa8
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000069f25
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000069e8e
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000069dd1

@end

