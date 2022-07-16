//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct CLLocationCoordinate2D {
    double latitude;
    double longitude;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _PXQuadTreeStoreNode {
    struct _PXQuadTreeStoreNode *_field1;
    struct _PXQuadTreeStoreNode *_field2;
    struct _PXQuadTreeStoreNode *_field3;
    struct _PXQuadTreeStoreNode *_field4;
    unsigned long long _field5;
    unsigned long long _field6;
    CDStruct_02837cd9 _field7;
    id _field8;
    struct *_field9;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct {
        double x;
        double y;
    } origin;
    struct {
        double width;
        double height;
    } size;
} CDStruct_02837cd9;

typedef struct {
    struct CLLocationCoordinate2D _field1;
    struct {
        double _field1;
        double _field2;
    } _field2;
} CDStruct_26e8d939;

