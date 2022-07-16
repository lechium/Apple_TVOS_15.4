//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosImagingFoundation/NSCopying-Protocol.h>

@class IPAAdjustmentVersion, NSDictionary, NSString;

@interface IPAAdjustment : NSObject <NSCopying>
{
    NSString *_identifier;	// 8 = 0x8
    IPAAdjustmentVersion *_version;	// 16 = 0x10
    NSDictionary *_settings;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000000937d
@property(retain, nonatomic) NSDictionary *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) IPAAdjustmentVersion *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)_debugDescriptionSuffix;	// IMP=0x0000000000009357
- (id)debugDescription;	// IMP=0x00000000000091d2
- (id)description;	// IMP=0x00000000000091c0
- (_Bool)isEqualToAdjustment:(id)arg1;	// IMP=0x000000000000908d
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000009034
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000008e9a
- (id)init;	// IMP=0x0000000000008e49

@end

