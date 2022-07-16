//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

@interface GEOAppleMediaServicesResult : NSObject <NSSecureCoding>
{
    int _ratingsCount;	// 8 = 0x8
    float _ratingsValue;	// 12 = 0xc
    int _episodeNumber;	// 16 = 0x10
    long long _mediaType;	// 24 = 0x18
    NSString *_identifier;	// 32 = 0x20
    NSString *_displayName;	// 40 = 0x28
    NSURL *_url;	// 48 = 0x30
    NSString *_subtitle;	// 56 = 0x38
    NSString *_iOSBundleIdentifier;	// 64 = 0x40
    NSURL *_artworkURL;	// 72 = 0x48
    NSArray *_transitModes;	// 80 = 0x50
    NSString *_artistName;	// 88 = 0x58
    NSString *_editorialSubtitle;	// 96 = 0x60
    NSString *_classType;	// 104 = 0x68
    double _duration;	// 112 = 0x70
    NSString *_shortName;	// 120 = 0x78
}

+ (id)_artworkDictionaryFromResponseDictionary:(id)arg1;	// IMP=0x0000000001230415
+ (_Bool)supportsSecureCoding;	// IMP=0x000000000123040d
- (void).cxx_destruct;	// IMP=0x000000000123087a
@property(readonly, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, nonatomic) NSString *classType; // @synthesize classType=_classType;
@property(readonly, nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(readonly, nonatomic) NSString *editorialSubtitle; // @synthesize editorialSubtitle=_editorialSubtitle;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property(readonly, nonatomic) NSArray *transitModes; // @synthesize transitModes=_transitModes;
@property(nonatomic) float ratingsValue; // @synthesize ratingsValue=_ratingsValue;
@property(nonatomic) int ratingsCount; // @synthesize ratingsCount=_ratingsCount;
@property(retain, nonatomic) NSURL *artworkURL; // @synthesize artworkURL=_artworkURL;
@property(copy, nonatomic) NSString *iOSBundleIdentifier; // @synthesize iOSBundleIdentifier=_iOSBundleIdentifier;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000001230085
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000122fcc5
- (id)initWithResponseDictionary:(id)arg1 mediaType:(long long)arg2 artworkSize:(struct CGSize)arg3 screenScale:(double)arg4;	// IMP=0x000000000122f124
- (id)initWithIdentifier:(id)arg1 mediaType:(long long)arg2 displayName:(id)arg3 shortName:(id)arg4 artistName:(id)arg5 url:(id)arg6 subtitle:(id)arg7 editorialSubtitle:(id)arg8 iOSBundleIdentifier:(id)arg9 artworkURL:(id)arg10 ratingsCount:(int)arg11 ratingsValue:(float)arg12 transitModes:(id)arg13 classType:(id)arg14 episodeNumber:(int)arg15 duration:(double)arg16;	// IMP=0x000000000122ee5c

@end

