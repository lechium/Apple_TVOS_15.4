//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ActionKit/NSCopying-Protocol.h>

@class NSDictionary, NSMutableArray;

@interface KSXMLAttributes : NSObject <NSCopying>
{
    NSMutableArray *_attributes;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000002ea797
- (id)description;	// IMP=0x00000000002ea692
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000002ea65c
- (void)close;	// IMP=0x00000000002ea646
- (void)addAttribute:(id)arg1 value:(id)arg2;	// IMP=0x00000000002ea554
- (_Bool)hasAttributes;	// IMP=0x00000000002ea537
@property(copy, nonatomic) NSDictionary *attributesAsDictionary;
- (id)initWithXMLAttributes:(id)arg1;	// IMP=0x00000000002ea23e
- (id)init;	// IMP=0x00000000002ea1d3
- (void)writeAttributes:(id)arg1;	// IMP=0x0000000000210393

@end

