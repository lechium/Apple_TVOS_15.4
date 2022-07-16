//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface ISTagIcon
{
    NSString *_tag;	// 16 = 0x10
    NSString *_tagClass;	// 24 = 0x18
    NSString *_baseType;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000029a61
- (void).cxx_destruct;	// IMP=0x000000000002a387
@property(readonly) NSString *baseType; // @synthesize baseType=_baseType;
@property(readonly) NSString *tagClass; // @synthesize tagClass=_tagClass;
@property(readonly) NSString *tag; // @synthesize tag=_tag;
- (id)_fallbackKey;	// IMP=0x000000000002a2be
- (id)description;	// IMP=0x000000000002a217
- (id)makeResourceProvider;	// IMP=0x0000000000029ea0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000029de6
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000029cbe
- (id)initWithModelCode:(id)arg1;	// IMP=0x0000000000029c9f
- (id)initWithMIMEType:(id)arg1;	// IMP=0x0000000000029c80
- (id)initWithTypeCode:(unsigned int)arg1;	// IMP=0x0000000000029c72
- (id)initWithFileExtension:(id)arg1 baseType:(id)arg2;	// IMP=0x0000000000029c53
- (id)initWithFileExtension:(id)arg1;	// IMP=0x0000000000029c2d
- (id)initWithTag:(id)arg1 tagClass:(id)arg2 baseType:(id)arg3;	// IMP=0x0000000000029a69

@end
