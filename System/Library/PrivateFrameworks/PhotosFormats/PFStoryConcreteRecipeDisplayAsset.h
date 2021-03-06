//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosFormats/PFStoryRecipeDisplayAsset-Protocol.h>

@class NSString, NSURL;

@interface PFStoryConcreteRecipeDisplayAsset <PFStoryRecipeDisplayAsset>
{
    long long _category;	// 8 = 0x8
    NSString *_scheme;	// 16 = 0x10
    NSString *_cloudIdentifier;	// 24 = 0x18
}

+ (_Bool)decomposeURL:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000007181e
+ (id)URLWithScheme:(id)arg1 cloudIdentifier:(id)arg2;	// IMP=0x00000000000716d9
- (void).cxx_destruct;	// IMP=0x00000000000716a8
@property(readonly, nonatomic) NSString *cloudIdentifier; // @synthesize cloudIdentifier=_cloudIdentifier;
@property(readonly, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(readonly, nonatomic) long long category; // @synthesize category=_category;
- (_Bool)isEqualToAsset:(id)arg1;	// IMP=0x0000000000071516
- (id)initWithIdentifier:(id)arg1 kind:(long long)arg2 url:(id)arg3;	// IMP=0x00000000000714f4
- (id)initWithIdentifier:(id)arg1 category:(long long)arg2 scheme:(id)arg3 cloudIdentifier:(id)arg4;	// IMP=0x00000000000713be

// Remaining properties
@property(readonly, nonatomic) NSString *diagnosticDescription;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) long long kind;
@property(readonly, nonatomic) NSURL *url;

@end

