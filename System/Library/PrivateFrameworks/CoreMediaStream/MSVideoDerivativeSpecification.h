//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject
{
    _Bool _useCellular;	// 8 = 0x8
    _Bool _powerRequired;	// 9 = 0x9
    double _bitRate;	// 16 = 0x10
    NSString *_videoType;	// 24 = 0x18
    unsigned long long _mediaAssetType;	// 32 = 0x20
}

+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)arg1;	// IMP=0x00000000000e491e
@property(readonly, nonatomic) unsigned long long mediaAssetType; // @synthesize mediaAssetType=_mediaAssetType;
@property(readonly, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(readonly, nonatomic) double bitRate; // @synthesize bitRate=_bitRate;
@property(readonly, nonatomic) _Bool powerRequired; // @synthesize powerRequired=_powerRequired;
@property(readonly, nonatomic) _Bool useCellular; // @synthesize useCellular=_useCellular;
- (id)initWithDictionary:(id)arg1;	// IMP=0x00000000000e4737

@end

