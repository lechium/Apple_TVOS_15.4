//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLHeading, CLLocation, NSString;
@protocol MKAnnotationPrivate;

__attribute__((visibility("hidden")))
@interface MKUserLocationInternal : NSObject
{
    CLLocation *fixedLocation;	// 8 = 0x8
    CLLocation *predictedLocation;	// 16 = 0x10
    CLHeading *heading;	// 24 = 0x18
    NSString *title;	// 32 = 0x20
    NSString *subtitle;	// 40 = 0x28
    id <MKAnnotationPrivate> _annotation;	// 48 = 0x30
    double timestamp;	// 56 = 0x38
    _Bool updating;	// 64 = 0x40
    double course;	// 72 = 0x48
    id <MKAnnotationPrivate> annotation;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x00000000001e3bb4
@property(nonatomic) double course; // @synthesize course;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) double timestamp; // @synthesize timestamp;
@property(readonly, nonatomic) id <MKAnnotationPrivate> annotation; // @synthesize annotation;
@property(retain, nonatomic) CLHeading *heading; // @synthesize heading;
@property(retain, nonatomic) CLLocation *predictedLocation; // @synthesize predictedLocation;
@property(retain, nonatomic) CLLocation *fixedLocation; // @synthesize fixedLocation;
@property(nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating;

@end

