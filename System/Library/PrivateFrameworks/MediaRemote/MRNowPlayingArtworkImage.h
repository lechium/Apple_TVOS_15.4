//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

@interface MRNowPlayingArtworkImage
{
    NSData *_imageData;	// 8 = 0x8
    NSString *_mimeType;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001e714d
@property(readonly, copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(readonly, copy, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
- (id)description;	// IMP=0x00000000001e7037
- (id)copyImageData;	// IMP=0x00000000001e701a
- (_Bool)hasArtworkData;	// IMP=0x00000000001e6ff6
- (unsigned int)type;	// IMP=0x00000000001e6feb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000001e6f59
- (id)initWithImageData:(id)arg1 mimeType:(id)arg2;	// IMP=0x00000000001e6e92

@end

