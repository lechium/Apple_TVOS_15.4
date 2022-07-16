//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VUIAgeVerification : NSObject
{
    _Bool _isAgeVerificationEnabled;	// 8 = 0x8
    NSNumber *_minTvRatingRequiringAgeVerification;	// 16 = 0x10
    NSNumber *_minMovieRatingRequiringAgeVerification;	// 24 = 0x18
    id _notificationToken;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x0000000000094e56
- (void).cxx_destruct;	// IMP=0x0000000000095a60
@property(retain, nonatomic) id notificationToken; // @synthesize notificationToken=_notificationToken;
@property(retain, nonatomic) NSNumber *minMovieRatingRequiringAgeVerification; // @synthesize minMovieRatingRequiringAgeVerification=_minMovieRatingRequiringAgeVerification;
@property(retain, nonatomic) NSNumber *minTvRatingRequiringAgeVerification; // @synthesize minTvRatingRequiringAgeVerification=_minTvRatingRequiringAgeVerification;
@property(nonatomic) _Bool isAgeVerificationEnabled; // @synthesize isAgeVerificationEnabled=_isAgeVerificationEnabled;
- (void)performAgeGateVerificationWithRatingValue:(id)arg1 ratingDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000094fb7
- (void)configureAgeVerification:(id)arg1;	// IMP=0x0000000000094eab

@end

