//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICStoreRadioStreamAssetInfo, NSURL;

@interface MPStoreRadioStreamAssetInfo : NSObject
{
    ICStoreRadioStreamAssetInfo *_internalInfo;	// 8 = 0x8
    _Bool _iTunesStoreStream;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000174096
@property(nonatomic, getter=isiTunesStoreStream) _Bool iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
- (long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)arg1;	// IMP=0x000000000017406b
- (long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)arg1;	// IMP=0x000000000017404d
- (_Bool)isITunesStoreStream;	// IMP=0x0000000000174037
@property(readonly, copy, nonatomic) NSURL *keyServerURL;
@property(readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property(readonly, copy, nonatomic) NSURL *streamURL;
@property(readonly, nonatomic) long long streamProtocol;
@property(readonly, nonatomic) long long flavor;
- (id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg1;	// IMP=0x0000000000173f20

@end

