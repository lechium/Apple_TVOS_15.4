//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface ETLossConfig : NSObject
{
    unsigned long long _mode;	// 8 = 0x8
    NSString *_loss_name;	// 16 = 0x10
    NSString *_output_name;	// 24 = 0x18
    NSString *_label_name;	// 32 = 0x20
    NSArray *_label_shape;	// 40 = 0x28
    NSString *_custom_network_path;	// 48 = 0x30
}

+ (id)L2Loss;	// IMP=0x0000000000476244
+ (id)softmaxCrossEntropyLoss;	// IMP=0x00000000004761f9
- (void).cxx_destruct;	// IMP=0x00000000004761b0
@property(retain) NSString *custom_network_path; // @synthesize custom_network_path=_custom_network_path;
@property(retain) NSArray *label_shape; // @synthesize label_shape=_label_shape;
@property(retain) NSString *label_name; // @synthesize label_name=_label_name;
@property(retain) NSString *output_name; // @synthesize output_name=_output_name;
@property(retain) NSString *loss_name; // @synthesize loss_name=_loss_name;
@property unsigned long long mode; // @synthesize mode=_mode;

@end

