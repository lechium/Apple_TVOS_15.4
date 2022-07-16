//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol ICDJaliscoSupportedMediaKindsHandler;

@interface ICDJaliscoMediaFilter : NSObject
{
    NSArray *_excludedKinds;	// 8 = 0x8
    NSArray *_supportedMediaKinds;	// 16 = 0x10
    id <ICDJaliscoSupportedMediaKindsHandler> _supportedMediaKindsHandler;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000000568c1
@property(readonly, copy, nonatomic) NSString *daapQueryFilterString;
@property(readonly, copy, nonatomic) NSArray *supportedMediaKinds;
- (id)initWithKindsToExclude:(id)arg1 supportedMediaKindsHandler:(id)arg2;	// IMP=0x0010000000056271

@end

