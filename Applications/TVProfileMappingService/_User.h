//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface _User : NSObject
{
    NSString *_identifier;	// 8 = 0x8
    NSString *_name;	// 16 = 0x10
    NSNumber *_assignedProfileIndex;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000004a60
@property(nonatomic) NSNumber *assignedProfileIndex; // @synthesize assignedProfileIndex=_assignedProfileIndex;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

@end
