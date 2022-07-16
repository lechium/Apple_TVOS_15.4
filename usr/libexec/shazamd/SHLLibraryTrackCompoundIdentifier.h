//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, SHLShazamKey;

__attribute__((visibility("hidden")))
@interface SHLLibraryTrackCompoundIdentifier : NSObject
{
    NSString *_recognitionIdentifier;	// 8 = 0x8
    SHLShazamKey *_shazamKey;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000001bd3a
+ (id)recognitionIdentifierFromTrackIdentifier:(id)arg1;	// IMP=0x001000000001bb65
+ (id)shazamKeyFromTrackIdentifier:(id)arg1;	// IMP=0x001000000001baa5
+ (_Bool)isTrackIdentifier:(id)arg1;	// IMP=0x001000000001ba89
+ (id)compoundIdentifierFromTrackIdentifier:(id)arg1;	// IMP=0x001000000001b9a3
+ (id)identifierWithRecognitionIdentifier:(id)arg1 shazamKey:(id)arg2;	// IMP=0x001000000001b80f
- (void).cxx_destruct;	// IMP=0x002000000001c1f3
@property(readonly, nonatomic) SHLShazamKey *shazamKey; // @synthesize shazamKey=_shazamKey;
@property(readonly, nonatomic) NSString *recognitionIdentifier; // @synthesize recognitionIdentifier=_recognitionIdentifier;
- (unsigned long long)hash;	// IMP=0x001000000001c132
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000001bfb7
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000001beca
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001bdd8
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001bd42
- (_Bool)hasValidRecognitionIdentifier;	// IMP=0x001000000001bcf2
@property(readonly, nonatomic) NSString *libraryItemIdentifier;
- (id)initWithRecognitionIdentifier:(id)arg1 shazamKey:(id)arg2;	// IMP=0x001000000001b87b

@end
