//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreServices/LSDetachable-Protocol.h>
#import <CoreServices/NSSecureCoding-Protocol.h>

@class LSApplicationExtensionRecord, LSBundleProxy, LSExtensionPoint, NSDate, NSDictionary, NSNumber, NSString, NSUUID;

@interface LSPlugInKitProxy <LSDetachable, NSSecureCoding>
{
    unsigned int _platform;	// 16 = 0x10
    unsigned int _pluginFlags;	// 20 = 0x14
    LSApplicationExtensionRecord *_appexRecord;	// 24 = 0x18
    NSString *_extensionPointID;	// 32 = 0x20
    _Bool _onSystemPartition;	// 40 = 0x28
    NSString *_pluginIdentifier;	// 48 = 0x30
    NSString *_originalIdentifier;	// 56 = 0x38
    NSString *_protocol;	// 64 = 0x40
    NSUUID *_pluginUUID;	// 72 = 0x48
    NSDate *_registrationDate;	// 80 = 0x50
    LSBundleProxy *_containingBundle;	// 88 = 0x58
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000e1f96
+ (id)plugInKitProxyForUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;	// IMP=0x00000000000e1103
+ (id)pluginKitProxyForURL:(id)arg1;	// IMP=0x00000000000e0ee8
+ (id)pluginKitProxyForIdentifier:(id)arg1;	// IMP=0x00000000000e0a72
+ (id)pluginKitProxyForUUID:(id)arg1;	// IMP=0x00000000000e07ed
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1 withContext:(struct LSContext *)arg2 applicationExtensionRecord:(id)arg3 resolveAndDetach:(_Bool)arg4;	// IMP=0x00000000000e0781
+ (id)plugInKitProxyForPlugin:(unsigned int)arg1 withContext:(struct LSContext *)arg2;	// IMP=0x00000000000e0746
+ (id)containingBundleIdentifiersForPlugInBundleIdentifiers:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000e2e28
- (void).cxx_destruct;	// IMP=0x00000000000e2cfc
@property(readonly, nonatomic, getter=isOnSystemPartition) _Bool onSystemPartition; // @synthesize onSystemPartition=_onSystemPartition;
@property(readonly, nonatomic) LSBundleProxy *containingBundle; // @synthesize containingBundle=_containingBundle;
@property(readonly, nonatomic) NSDate *registrationDate; // @synthesize registrationDate=_registrationDate;
@property(readonly, nonatomic) NSUUID *pluginUUID; // @synthesize pluginUUID=_pluginUUID;
@property(readonly, nonatomic) NSString *protocol; // @synthesize protocol=_protocol;
@property(readonly, nonatomic) NSString *originalIdentifier; // @synthesize originalIdentifier=_originalIdentifier;
@property(readonly, nonatomic) NSString *pluginIdentifier; // @synthesize pluginIdentifier=_pluginIdentifier;
- (void)detach;	// IMP=0x00000000000e2c43
- (id)groupContainerURLs;	// IMP=0x00000000000e2c26
- (id)dataContainerURL;	// IMP=0x00000000000e2c09
- (_Bool)_usesSystemPersona;	// IMP=0x00000000000e2bc5
- (id)_managedPersonas;	// IMP=0x00000000000e2b75
- (id)description;	// IMP=0x00000000000e2a55
- (id)_valueForEqualityTesting;	// IMP=0x00000000000e2a43
@property(readonly, nonatomic) NSString *teamID; // @dynamic teamID;
- (id)signerIdentity;	// IMP=0x00000000000e29bb
- (id)signerOrganization;	// IMP=0x00000000000e299e
- (_Bool)freeProfileValidated;	// IMP=0x00000000000e2981
- (_Bool)UPPValidated;	// IMP=0x00000000000e2964
- (_Bool)profileValidated;	// IMP=0x00000000000e2947
- (id)bundleType;	// IMP=0x00000000000e293a
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;	// IMP=0x00000000000e2932
- (id)boundIconsDictionary;	// IMP=0x00000000000e28cc
@property(readonly, nonatomic) LSExtensionPoint *extensionPoint;
@property(readonly, nonatomic) _Bool pluginCanProvideIcon;
@property(readonly, nonatomic) NSDictionary *infoPlist;
@property(readonly, nonatomic) NSDictionary *pluginKitDictionary;
- (unsigned long long)compatibilityState;	// IMP=0x00000000000e25e1
@property(readonly, nonatomic) NSNumber *platform;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3;	// IMP=0x00000000000e239f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000e221f
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000e1f9e
- (id)_initWithUUID:(id)arg1 bundleIdentifier:(id)arg2 pluginIdentifier:(id)arg3 effectiveIdentifier:(id)arg4 version:(id)arg5 bundleURL:(id)arg6;	// IMP=0x00000000000e1d67
- (id)_initWithPlugin:(unsigned int)arg1 andContext:(struct LSContext *)arg2 applicationExtensionRecord:(id)arg3 resolveAndDetach:(_Bool)arg4;	// IMP=0x00000000000e11ef
- (id)_localizedNameWithPreferredLocalizations:(id)arg1 useShortNameOnly:(_Bool)arg2;	// IMP=0x00000000000e2d93
- (id)correspondingApplicationExtensionRecord;	// IMP=0x00000000000e3089

@end

