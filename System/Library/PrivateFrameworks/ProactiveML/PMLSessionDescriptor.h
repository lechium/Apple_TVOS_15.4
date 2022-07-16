//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ProactiveML/NSCopying-Protocol.h>
#import <ProactiveML/PMLPlistAndChunksSerializableProtocol-Protocol.h>

@class NSString;

@interface PMLSessionDescriptor : NSObject <NSCopying, PMLPlistAndChunksSerializableProtocol>
{
    float _featureVersion;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSString *_version;	// 24 = 0x18
    NSString *_locale;	// 32 = 0x20
}

+ (id)descriptorForName:(id)arg1 version:(id)arg2 locale:(id)arg3;	// IMP=0x000000000001b755
- (void).cxx_destruct;	// IMP=0x000000000001b5b9
@property(readonly, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(readonly, nonatomic) float featureVersion; // @synthesize featureVersion=_featureVersion;
@property(readonly, nonatomic) NSString *version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy) NSString *description;
- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;	// IMP=0x000000000001b444
- (id)toPlistWithChunks:(id)arg1;	// IMP=0x000000000001b3ab
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000001b284
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000001b17a
- (unsigned long long)subSessionLabel;	// IMP=0x000000000001afa6
- (_Bool)isSubSessionDescriptor;	// IMP=0x000000000001aebf
- (id)baseSessionDescriptor;	// IMP=0x000000000001ad52
- (id)subSessionDescriptorForLabel:(unsigned long long)arg1;	// IMP=0x000000000001ac4b
- (float)_parseFeatureVersion:(id)arg1 descriptor:(id)arg2;	// IMP=0x000000000001a932
- (id)initWithName:(id)arg1 version:(id)arg2 locale:(id)arg3;	// IMP=0x000000000001a6a6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
