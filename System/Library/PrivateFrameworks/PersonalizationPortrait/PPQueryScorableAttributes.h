//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary, NSNumber;

@interface PPQueryScorableAttributes : NSObject
{
    NSNumber *_portraitStaticScore;	// 8 = 0x8
    NSData *_portraitFeatureVector;	// 16 = 0x10
    NSNumber *_portraitFeatureVectorVersion;	// 24 = 0x18
    NSDictionary *_portraitNamedEntities;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000004990c
@property(retain, nonatomic) NSDictionary *portraitNamedEntities; // @synthesize portraitNamedEntities=_portraitNamedEntities;
@property(retain, nonatomic) NSNumber *portraitFeatureVectorVersion; // @synthesize portraitFeatureVectorVersion=_portraitFeatureVectorVersion;
@property(retain, nonatomic) NSData *portraitFeatureVector; // @synthesize portraitFeatureVector=_portraitFeatureVector;
@property(retain, nonatomic) NSNumber *portraitStaticScore; // @synthesize portraitStaticScore=_portraitStaticScore;

@end
