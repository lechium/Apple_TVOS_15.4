//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MetricKit/NSSecureCoding-Protocol.h>

@class NSString;

@interface MXMetaData : NSObject <NSSecureCoding>
{
    NSString *_regionFormat;	// 8 = 0x8
    NSString *_osVersion;	// 16 = 0x10
    NSString *_deviceType;	// 24 = 0x18
    NSString *_applicationBuildVersion;	// 32 = 0x20
    NSString *_platformArchitecture;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000307b
- (void).cxx_destruct;	// IMP=0x00000000000035a4
@property(retain) NSString *platformArchitecture; // @synthesize platformArchitecture=_platformArchitecture;
@property(retain) NSString *applicationBuildVersion; // @synthesize applicationBuildVersion=_applicationBuildVersion;
@property(retain) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property(retain) NSString *osVersion; // @synthesize osVersion=_osVersion;
@property(retain) NSString *regionFormat; // @synthesize regionFormat=_regionFormat;
- (id)dictionaryRepresentation;	// IMP=0x00000000000034e3
- (id)DictionaryRepresentation;	// IMP=0x00000000000034d1
- (id)JSONRepresentation;	// IMP=0x000000000000342c
- (id)toDictionary;	// IMP=0x00000000000032a0
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000312c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000003083
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4 platformArchitecture:(id)arg5;	// IMP=0x0000000000002f45
- (id)initWithRegionFormat:(id)arg1 osVersion:(id)arg2 deviceType:(id)arg3 appBuildVersion:(id)arg4;	// IMP=0x0000000000002e2f

@end
