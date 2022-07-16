//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface WFFileProviderLocation
{
    NSString *_fileProviderDomainID;	// 8 = 0x8
    NSString *_crossDeviceItemID;	// 16 = 0x10
    NSString *_appContainerBundleIdentifier;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000169745
+ (_Bool)canRepresentURL:(id)arg1 item:(id)arg2 parentItems:(id)arg3;	// IMP=0x000000000016973d
+ (id)subpathFromURL:(id)arg1 item:(id)arg2;	// IMP=0x0000000000169735
+ (_Bool)canRepresentURL:(id)arg1;	// IMP=0x000000000016972d
+ (Class)supportedClassForURL:(id)arg1;	// IMP=0x0000000000169725
+ (id)locationWithSerializedRepresentation:(id)arg1;	// IMP=0x00000000001695d4
- (void).cxx_destruct;	// IMP=0x0000000000169592
@property(readonly, nonatomic) NSString *appContainerBundleIdentifier; // @synthesize appContainerBundleIdentifier=_appContainerBundleIdentifier;
@property(readonly, nonatomic) NSString *crossDeviceItemID; // @synthesize crossDeviceItemID=_crossDeviceItemID;
@property(readonly, nonatomic) NSString *fileProviderDomainID; // @synthesize fileProviderDomainID=_fileProviderDomainID;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000016948b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000169389
- (id)resolveCrossDeviceItemIDWithError:(id *)arg1;	// IMP=0x0000000000169381
- (id)resolveLocationFromProviderDomainID;	// IMP=0x0000000000169379
- (id)resolveLocationWithError:(id *)arg1;	// IMP=0x0000000000169371
- (id)initWithFileProviderDomainID:(id)arg1 crossDeviceItemID:(id)arg2 appContainerBundleIdentifier:(id)arg3 relativeSubpath:(id)arg4;	// IMP=0x0000000000169286

@end
