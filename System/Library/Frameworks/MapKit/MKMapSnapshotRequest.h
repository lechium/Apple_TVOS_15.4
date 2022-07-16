//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapSnapshotCreator, NSString, UIImage, VKMapSnapshotCreator;

__attribute__((visibility("hidden")))
@interface MKMapSnapshotRequest : NSObject
{
    id _requester;	// 8 = 0x8
    id _context;	// 16 = 0x10
    struct CLLocationCoordinate2D _coordinate;	// 24 = 0x18
    unsigned long long _zoomLevel;	// 40 = 0x28
    struct CGSize _size;	// 48 = 0x30
    UIImage *_image;	// 64 = 0x40
    NSString *_attributionString;	// 72 = 0x48
    MKMapSnapshotCreator *_delegate;	// 80 = 0x50
    VKMapSnapshotCreator *_snapshotCreator;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x000000000004123b
@property(retain, nonatomic) NSString *attributionString; // @synthesize attributionString=_attributionString;
@property(readonly, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) __weak MKMapSnapshotCreator *delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) unsigned long long zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) id requester; // @synthesize requester=_requester;
@property(retain, nonatomic) id context; // @synthesize context=_context;
- (void)cancel;	// IMP=0x000000000004114f
- (void)start;	// IMP=0x0000000000040e40
- (id)description;	// IMP=0x0000000000040d3c

@end

