//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSURL;

@interface MSVArtworkServiceResizeRequest
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSMutableArray *_resizeDestinations;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00000000000435b6
- (void).cxx_destruct;	// IMP=0x0000000000043573
@property(retain, nonatomic) NSMutableArray *resizeDestinations; // @synthesize resizeDestinations=_resizeDestinations;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)debugDescription;	// IMP=0x0000000000043476
- (Class)operationClass;	// IMP=0x0000000000043465
- (void)enumerateDestinationsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000043342
- (void)addJPEGDestinationWithSize:(struct CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3;	// IMP=0x000000000004326d
- (void)addDestinationWithFormat:(long long)arg1 size:(struct CGSize)arg2 url:(id)arg3;	// IMP=0x000000000004319c
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000430c8
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000042f96
- (id)initWithSourceURL:(id)arg1;	// IMP=0x0000000000042edb

@end

