//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Sharing/NSObject-Protocol.h>

@class INImage, NSArray, NSString;

@protocol SFPeopleSuggestion <NSObject>
@property(nonatomic) _Bool isRestricted;
@property(retain, nonatomic) INImage *donatedImage;
@property(copy, nonatomic) NSArray *contacts;
@property(copy, nonatomic) NSString *transportBundleIdentifier;
@property(copy, nonatomic) NSString *displayName;
@property(copy, nonatomic) NSString *identifier;
@end
