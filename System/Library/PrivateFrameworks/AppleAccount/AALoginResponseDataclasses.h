//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface AALoginResponseDataclasses : NSObject
{
    NSArray *_provisionedDataclasses;	// 8 = 0x8
    NSDictionary *_dataclassProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000043382
@property(readonly, nonatomic) NSDictionary *dataclassProperties; // @synthesize dataclassProperties=_dataclassProperties;
@property(readonly, nonatomic) NSArray *provisionedDataclasses; // @synthesize provisionedDataclasses=_provisionedDataclasses;
- (id)initWithiCloudServiceData:(id)arg1;	// IMP=0x00000000000430eb

@end

