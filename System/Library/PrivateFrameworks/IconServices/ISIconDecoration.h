//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IconServices/ISIconDecoration-Protocol.h>
#import <IconServices/ISIconDecorationInternal-Protocol.h>
#import <IconServices/NSCopying-Protocol.h>

@class NSString, NSURL, NSUUID;
@protocol ISScalableCompositorResource;

@interface ISIconDecoration : NSObject <ISIconDecorationInternal, ISIconDecoration, NSCopying>
{
    long long _position;	// 8 = 0x8
    long long _mode;	// 16 = 0x10
    NSURL *_resourceURL;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    unsigned long long _identifierKind;	// 40 = 0x28
    NSUUID *_resourceToken;	// 48 = 0x30
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039832
- (void).cxx_destruct;	// IMP=0x000000000003a23c
@property(readonly) NSUUID *resourceToken; // @synthesize resourceToken=_resourceToken;
@property(readonly) unsigned long long identifierKind; // @synthesize identifierKind=_identifierKind;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSURL *resourceURL; // @synthesize resourceURL=_resourceURL;
@property long long mode; // @synthesize mode=_mode;
@property long long position; // @synthesize position=_position;
@property(readonly) id <ISScalableCompositorResource> compositorResource;
- (id)resourceFingerprint;	// IMP=0x0000000000039f29
@property(readonly, copy) NSString *description;
@property(readonly) NSUUID *uuid;
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039bd2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039afe
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039aab
- (id)initWithResourceURL:(id)arg1;	// IMP=0x0000000000039a23
- (id)initWithBundleIdentifier:(id)arg1;	// IMP=0x00000000000399a1
- (id)initWithKind:(unsigned long long)arg1 identifier:(id)arg2;	// IMP=0x000000000003991c
- (id)initWithType:(id)arg1;	// IMP=0x000000000003989a
- (id)init;	// IMP=0x000000000003983a
- (id)imageForDescriptor:(id)arg1;	// IMP=0x000000000003a275
- (void)prepareImagesForDescriptors:(id)arg1;	// IMP=0x000000000003a26f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
