//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBTopShelfModelController, NSUUID;

@interface HBTopShelfModelControllerContext : NSObject
{
    NSUUID *_identifier;	// 8 = 0x8
    HBTopShelfModelController *_modelController;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000001d88a
@property(readonly, nonatomic) __weak HBTopShelfModelController *modelController; // @synthesize modelController=_modelController;
@property(readonly, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;	// IMP=0x001000000001d77e
- (id)initWithModelController:(id)arg1;	// IMP=0x001000000001d6f4

@end

