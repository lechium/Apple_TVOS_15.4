//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>

@class NSURL;

@interface RadioArtwork : NSObject <NSCopying>
{
    NSURL *_URL;	// 8 = 0x8
    struct CGSize _pixelSize;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000027d11
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) struct CGSize pixelSize; // @synthesize pixelSize=_pixelSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000027cec
@property(readonly, nonatomic) struct CGSize pointSize;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000027bd5
- (unsigned long long)hash;	// IMP=0x0000000000027b69
- (id)description;	// IMP=0x0000000000027b1e
- (id)initWithArtworkURL:(id)arg1 pixelSize:(struct CGSize)arg2;	// IMP=0x0000000000027a6e
- (id)initWithArtworkDictionary:(id)arg1;	// IMP=0x0000000000027885

@end
