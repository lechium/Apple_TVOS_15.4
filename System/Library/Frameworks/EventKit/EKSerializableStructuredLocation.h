//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CalLocation;

__attribute__((visibility("hidden")))
@interface EKSerializableStructuredLocation
{
    CalLocation *_calLocation;	// 8 = 0x8
}

+ (id)classesForKey;	// IMP=0x0000000000047606
- (void).cxx_destruct;	// IMP=0x00000000000477ac
@property(copy, nonatomic) CalLocation *calLocation; // @synthesize calLocation=_calLocation;
- (id)createStructuredLocation;	// IMP=0x000000000004775b
- (id)initWithStructuredLocation:(id)arg1;	// IMP=0x00000000000476c6

@end

