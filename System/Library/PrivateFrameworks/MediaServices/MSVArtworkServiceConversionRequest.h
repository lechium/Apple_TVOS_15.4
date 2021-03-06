//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL;

@interface MSVArtworkServiceConversionRequest
{
    NSURL *_sourceURL;	// 8 = 0x8
    NSURL *_destinationURL;	// 16 = 0x10
    long long _destinationFormat;	// 24 = 0x18
    double _destinationCompressionQuality;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x000000000000e562
- (void).cxx_destruct;	// IMP=0x000000000000e531
@property(nonatomic) double destinationCompressionQuality; // @synthesize destinationCompressionQuality=_destinationCompressionQuality;
@property(nonatomic) long long destinationFormat; // @synthesize destinationFormat=_destinationFormat;
@property(copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property(copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
- (id)debugDescription;	// IMP=0x000000000000e281
- (long long)operationPriority;	// IMP=0x000000000000e276
- (Class)operationClass;	// IMP=0x000000000000e265
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e148
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e016
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 destinationFormat:(long long)arg3;	// IMP=0x000000000000deee

@end

