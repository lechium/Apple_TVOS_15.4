//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface TLToneStoreDownload : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSString *_accessQueueLabel;	// 16 = 0x10
    NSString *_name;	// 24 = 0x18
    NSString *_albumTitle;	// 32 = 0x20
    NSString *_artistName;	// 40 = 0x28
    double _duration;	// 48 = 0x30
    NSString *_genreName;	// 56 = 0x38
    _Bool _isRingtone;	// 64 = 0x40
    unsigned long long _storeItemIdentifier;	// 72 = 0x48
    float _downloadProgress;	// 80 = 0x50
    NSString *_toneIdentifier;	// 88 = 0x58
    NSString *_identifier;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000029221
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (unsigned long long)hash;	// IMP=0x000000000002907e
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000028b2f
- (id)description;	// IMP=0x00000000000288e4
@property(copy, nonatomic, setter=_setToneIdentifier:) NSString *toneIdentifier;
@property(nonatomic, setter=_setDownloadProgress:) float downloadProgress;
@property(nonatomic, setter=_setStoreItemIdentifier:) unsigned long long storeItemIdentifier;
@property(nonatomic, getter=isRingtone, setter=_setRingtone:) _Bool ringtone;
@property(copy, nonatomic, setter=_setGenreName:) NSString *genreName;
@property(nonatomic, setter=_setDuration:) double duration;
@property(copy, nonatomic, setter=_setArtistName:) NSString *artistName;
@property(copy, nonatomic, setter=_setAlbumTitle:) NSString *albumTitle;
@property(copy, nonatomic, setter=_setName:) NSString *name;
- (void)dealloc;	// IMP=0x000000000002783a
- (id)init;	// IMP=0x0000000000027655

@end

