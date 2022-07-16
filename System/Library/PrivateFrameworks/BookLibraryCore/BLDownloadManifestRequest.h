//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <BookLibraryCore/NSSecureCoding-Protocol.h>

@class NSURLRequest;

@interface BLDownloadManifestRequest <NSSecureCoding>
{
    NSURLRequest *_urlRequest;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x0000000000025373
- (void).cxx_destruct;	// IMP=0x00000000000254c4
@property(retain, nonatomic) NSURLRequest *URLRequest; // @synthesize URLRequest=_urlRequest;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000025426
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000002537b
- (void)startWithManifestResponseBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000000250c1
- (id)initWithURLRequest:(id)arg1;	// IMP=0x0000000000025047

@end

