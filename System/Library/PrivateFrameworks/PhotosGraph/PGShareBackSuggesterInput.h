//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGShareBackSuggesterInputProtocol-Protocol.h>

@class CLLocation, NSDate, NSString, NSTimeZone, PHAsset;

@interface PGShareBackSuggesterInput : NSObject <PGShareBackSuggesterInputProtocol>
{
    NSDate *_creationDate;	// 8 = 0x8
    NSTimeZone *_timeZone;	// 16 = 0x10
    double _latitude;	// 24 = 0x18
    double _longitude;	// 32 = 0x20
    double _horizontalAccuracy;	// 40 = 0x28
    NSString *_localIdentifier;	// 48 = 0x30
}

+ (id)universalDateIntervalForSuggesterInputs:(id)arg1 withTimeIntervalPadding:(double)arg2;	// IMP=0x00000000003279a5
+ (id)localDateIntervalForSuggesterInputs:(id)arg1 withTimeIntervalPadding:(double)arg2;	// IMP=0x00000000003275fb
+ (id)suggesterInputsWithDictionaries:(id)arg1;	// IMP=0x0000000000327445
- (void).cxx_destruct;	// IMP=0x0000000000327412
@property(readonly, nonatomic) NSString *localIdentifier; // @synthesize localIdentifier=_localIdentifier;
@property(readonly, nonatomic) double horizontalAccuracy; // @synthesize horizontalAccuracy=_horizontalAccuracy;
@property(readonly, nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(readonly, nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(readonly, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(readonly, nonatomic) PHAsset *asset;
@property(readonly, nonatomic) NSDate *localCreationDate;
@property(readonly, nonatomic) CLLocation *location;
- (id)initWithDictionary:(id)arg1;	// IMP=0x000000000032701d

@end

