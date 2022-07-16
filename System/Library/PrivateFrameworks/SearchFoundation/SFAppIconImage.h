//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSCopying-Protocol.h>
#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/SFAppIconImage-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface SFAppIconImage <SFAppIconImage, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int iconType:1;
    } _has;	// 8 = 0x8
    int _iconType;	// 12 = 0xc
    NSString *_bundleIdentifier;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000002819e
- (void).cxx_destruct;	// IMP=0x000000000002818b
@property(nonatomic) int iconType; // @synthesize iconType=_iconType;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000002800c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027f99
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000027e4a
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000027d84
- (_Bool)hasIconType;	// IMP=0x0000000000027d72
- (id)initWithProtobuf:(id)arg1;	// IMP=0x00000000001d5600

// Remaining properties
@property(copy, nonatomic) NSString *accessibilityLabel;
@property(copy, nonatomic) NSString *contentType;
@property(nonatomic) double cornerRadius;
@property(nonatomic) int cornerRoundingStyle;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) NSString *identifier;
@property(copy) NSData *imageData;
@property(nonatomic) _Bool isTemplate;
@property(copy, nonatomic) NSString *keyColor;
@property(nonatomic) double scale;
@property(nonatomic) _Bool shouldCropToCircle;
@property(nonatomic) struct CGSize size;
@property(nonatomic) int source;
@property(readonly) Class superclass;

@end

