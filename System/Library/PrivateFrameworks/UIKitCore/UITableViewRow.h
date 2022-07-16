//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class UITableViewCell;

@interface UITableViewRow : NSObject <NSCoding>
{
    long long _indentationLevel;	// 8 = 0x8
    UITableViewCell *_cell;	// 16 = 0x10
    double _height;	// 24 = 0x18
}

+ (id)row;	// IMP=0x0000000000d88f01
- (void).cxx_destruct;	// IMP=0x0000000000d8939c
@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;
@property(nonatomic) double height; // @synthesize height=_height;
- (long long)indentationLevel;	// IMP=0x0000000000d89277
- (void)setIndentationLevel:(long long)arg1;	// IMP=0x0000000000d89174
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000d88fe7
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000d88f1b

@end
