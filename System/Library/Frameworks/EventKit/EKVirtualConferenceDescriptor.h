//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface EKVirtualConferenceDescriptor : NSObject
{
    NSString *_title;	// 8 = 0x8
    NSArray *_URLDescriptors;	// 16 = 0x10
    NSString *_conferenceDetails;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000000191ef
@property(readonly, copy, nonatomic) NSString *conferenceDetails; // @synthesize conferenceDetails=_conferenceDetails;
@property(readonly, copy, nonatomic) NSArray *URLDescriptors; // @synthesize URLDescriptors=_URLDescriptors;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (id)initWithTitle:(id)arg1 URLDescriptors:(id)arg2 conferenceDetails:(id)arg3;	// IMP=0x00000000000190db

@end

