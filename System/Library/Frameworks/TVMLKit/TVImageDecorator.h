//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TVImageDecorator : NSObject
{
}

- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000dfc4e
- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize)arg2 croppedToFit:(_Bool)arg3;	// IMP=0x00000000000dfc46
@property(readonly, copy, nonatomic) NSString *decoratorIdentifier;
@property(readonly, nonatomic) struct CGSize expectedSize;
@property(readonly, nonatomic) _Bool loaderCropToFit;
@property(readonly, nonatomic) struct CGSize loaderScaleToSize;

@end
