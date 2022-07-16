//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <VoiceShortcutClient/NSCopying-Protocol.h>
#import <VoiceShortcutClient/NSSecureCoding-Protocol.h>

@interface WFFinderImageResizeDescriptor : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _preserveMetadata;	// 8 = 0x8
    unsigned long long _format;	// 16 = 0x10
    unsigned long long _size;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000039ecc
@property(readonly, nonatomic) _Bool preserveMetadata; // @synthesize preserveMetadata=_preserveMetadata;
@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
@property(readonly, nonatomic) unsigned long long format; // @synthesize format=_format;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000039e0f
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000039d59
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000039d4e
- (id)description;	// IMP=0x0000000000039c90
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000039b88
- (unsigned long long)hash;	// IMP=0x0000000000039ad1
- (id)initWithFormat:(unsigned long long)arg1 size:(unsigned long long)arg2 preserveMetadata:(_Bool)arg3;	// IMP=0x0000000000039a62

@end

