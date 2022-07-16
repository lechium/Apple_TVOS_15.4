//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVKit/NSObject-Protocol.h>

@class NSArray, NSString;

@protocol UINamedLayerStack <NSObject>
@property(readonly, nonatomic) struct CGImage *flattenedImage;
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
@property(readonly, nonatomic) NSArray *layers;
@property(readonly, nonatomic) NSString *name;

@optional
@property(readonly, nonatomic) _Bool flatImageContainsCornerRadius;
@property(readonly, nonatomic) struct CGSize radiosityImageScale;
@property(readonly, nonatomic) id radiosityImage;
@end

