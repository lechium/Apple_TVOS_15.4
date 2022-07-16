//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoAnalysis/NSObject-Protocol.h>

@class NSData, NSString;

@protocol PVFaceProtocol <NSObject>
@property(readonly, nonatomic) unsigned short poseType;
@property(readonly, nonatomic) unsigned short ageType;
@property(nonatomic) long long qualityMeasure;
@property(readonly, nonatomic) NSData *faceprintData;
@property(readonly, nonatomic) long long clusterSequenceNumber;
@property(readonly, nonatomic) double poseYaw;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) NSString *personLocalIdentifier;
@property(readonly, nonatomic) NSString *localIdentifier;
@end

