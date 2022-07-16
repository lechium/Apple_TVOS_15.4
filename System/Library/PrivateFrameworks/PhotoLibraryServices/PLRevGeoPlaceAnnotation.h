//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotoLibraryServices/NSCopying-Protocol.h>

@class NSString;

@interface PLRevGeoPlaceAnnotation : NSObject <NSCopying>
{
    int _placeLevel;	// 8 = 0x8
    NSString *_placeName;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000017df65
@property(retain, nonatomic) NSString *placeName; // @synthesize placeName=_placeName;
@property(nonatomic) int placeLevel; // @synthesize placeLevel=_placeLevel;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000017df2d
- (id)description;	// IMP=0x000000000017de84
- (id)initWithData:(id)arg1;	// IMP=0x000000000017dd91
- (id)init;	// IMP=0x000000000017dd56

@end

