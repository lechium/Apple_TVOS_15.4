//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSString, TDTemplateRenderingMode, TDThemeBitSource;

@interface TDAsset : NSManagedObject
{
    unsigned int _scaleFactor;	// 8 = 0x8
}

+ (long long)subtypeFromImageFilename:(id)arg1;	// IMP=0x000000000000a67d
+ (long long)idiomFromImageFilename:(id)arg1;	// IMP=0x000000000000a4c6
+ (_Bool)isTemplateFromImageFilename:(id)arg1;	// IMP=0x000000000000a422
+ (unsigned int)scaleFactorFromImageFilename:(id)arg1;	// IMP=0x000000000000a32c
+ (id)_filenameRegex;	// IMP=0x000000000000a1d6
@property(readonly, nonatomic) NSString *baseName;
- (void)setHasProduction:(id)arg1;	// IMP=0x000000000000a1d0
- (_Bool)hasProduction;	// IMP=0x000000000000a1ba
- (id)fileURLWithDocument:(id)arg1;	// IMP=0x000000000000a10f
- (id)sourceRelativePath;	// IMP=0x000000000000a094
- (id)_sourceRelativePathComponents;	// IMP=0x000000000000a026
- (unsigned int)scaleFactor;	// IMP=0x0000000000009fd6
- (void)setScaleFactor:(unsigned int)arg1;	// IMP=0x0000000000009f85

// Remaining properties
@property(retain, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) TDThemeBitSource *source; // @dynamic source;
@property(retain, nonatomic) TDTemplateRenderingMode *templateRenderingMode; // @dynamic templateRenderingMode;

@end

